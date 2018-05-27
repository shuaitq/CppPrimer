#include "12.27.h"

#include <sstream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <iostream>

using namespace std;

TextQuery::TextQuery(std::ifstream &ifs) : input(new vector<string>)
{
    LineNo lineNo = 0;

    for(string line; getline(ifs, line); ++ lineNo)
    {
        input->push_back(line);
        istringstream iss(line);
        for(string text, word; iss >> text; word.clear())
        {
            remove_copy_if(text.begin(), text.end(), back_inserter(word), [](const char &c){ return ispunct(c); });
            auto &nos = result[word];

            if(!nos)
            {
                nos.reset(new set<LineNo>);
            }
            nos->insert(lineNo);
        }
    }
}

QueryResult TextQuery::query(const string &str) const
{
    static shared_ptr<set<LineNo>> nodata(new set<LineNo>);
    auto found = result.find(str);
    if(found == result.end())
    {
        return QueryResult(str, nodata, input);
    }
    else
    {
        return QueryResult(str, found->second, input);
    }
}

ostream &print(ostream &os, const QueryResult &qr)
{
    os << qr.word << " occurs " << qr.nos->size() << (qr.nos->size() > 1 ? " times" : " time") << endl;

    for(auto i : *qr.nos)
    {
        os << "\t(line " << i + 1 << ") " << qr.input->at(i) << endl;
    }

    return os;
}