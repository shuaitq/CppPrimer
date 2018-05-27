#ifndef TWELVE_TWENTY_SEVEN_H
#define TWELVE_TWENTY_SEVEN_H

#include <string>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <memory>

class QueryResult;
class TextQuery
{
public:
    using LineNo = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;

private:
    std::shared_ptr<std::vector<std::string>> input;
    std::map<std::string, std::shared_ptr<std::set<LineNo>>> result;
};

class QueryResult
{
public:
    QueryResult(const std::string &s, std::shared_ptr<std::set<TextQuery::LineNo>> set, std::shared_ptr<std::vector<std::string>> v)
    :word(s), nos(set), input(v){}

    friend std::ostream &print(std::ostream &os, const QueryResult &qr);

private:
    std::string word;
    std::shared_ptr<std::set<TextQuery::LineNo>> nos;
    std::shared_ptr<std::vector<std::string>> input;
};

#endif // TWELVE_TWENTY_SEVEN_H