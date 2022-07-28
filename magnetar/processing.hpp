#ifndef PROCESSING_HPP
#define PROCESSING_HPP

constexpr auto GET_TYPE = "GET";
constexpr auto POST_TYPE = "POST";
constexpr auto PUT_TYPE  = "PUT";
constexpr auto DELETE_TYPE = "DELETE";
constexpr auto PATCH_TYPE = "PATCH";

constexpr auto COPY_TYPE = "COPY";
constexpr auto HEAD_TYPE = "HEAD";
constexpr auto OPTIONS_TYPE = "OPTIONS";
constexpr auto LINK_TYPE = "LINK";
constexpr auto UNLINK_TYPE = "UNLINK";
constexpr auto PURGE_TYPE = "PURGE";


#define X_WWW_FORM "application/x-www-form-urlencoded"
#define PLAIN_TEXT "text/plain"

#include <string>
#include "request.hpp"
using std::string;

class HTTP_QUERY
{
private:
     int max_iterator{50};

public:
    HTTP_QUERY() {}
    ~HTTP_QUERY() {}
    string route_refactor_params(string &, string);
    string get_params(string &, bool &);
    string x_www_form_urlencoded(string &, string type = "");
    string findContenType(string &);
    string selectPerType(string &, string&, string&, bool&);
    std::pair<string, string> route_refactor(string &);
};

string HTTP_QUERY::x_www_form_urlencoded(string &target, string plain)
{
    string params{};
    for (size_t ti = target.length() - 1; ti > 0; ti--)
    {
        if (target[ti] == ' ' || target[ti] == char(13))
            break;
        params += target[ti];
    }
    std::reverse(params.begin(), params.end());

     fflush(stdin);
    return plain + params;
}

string HTTP_QUERY::selectPerType(string& target, string &conten_type, string& type, bool &init) {
    if(conten_type == X_WWW_FORM) {
        init = true;
        return x_www_form_urlencoded(target);
    } else if( conten_type == PLAIN_TEXT) {
        init = true;
        return x_www_form_urlencoded(target, "data=");
    } else {
        return get_params(target, init);
    }
}


string HTTP_QUERY::route_refactor_params(string &target, string type)
{

 string route{""}, 
        content_type{""};
 bool   init{false};

    content_type = findContenType(target);    
    route = selectPerType(target, content_type, type, init); 

    return  init ? route : NOT_PARAMS;
}




std::pair<string, string> HTTP_QUERY::route_refactor(string &target)
{    size_t size = target.size();
    std::pair<string,string> route;
    bool init = false;

    for (auto &it: target)
    {
        if(it == char(32) || it == '/') {
            break;
        } else{
            std::cin.clear();
            fflush(stdin);
            route.first += it;
        }
    }

    for (size_t ui = 0; ui < size; ui++) {

        if(init) {
                if (target[ui] == '?' || target[ui] == 'H' ) {
                break;
             }
              if (target[ui] != ' ') {
                    route.second += target[ui];
                    std::cin.clear();
             }
        } else if(target[ui+1]=='/'){
            init = true;
        }
    }

     fflush(stdin);
    return route;
}

string HTTP_QUERY::findContenType(string &target)
{
    string contet{};
    int map{0};
    for (size_t general = 0; general <= target.length(); general++)
    {
        string chunk{};
        for (size_t i = general; i < general + 13; i++)
        {
            chunk += target[i];
        }
        if (chunk == "Content-Type:")
        {
            map = general;
            break;
        }
    }
    for (size_t i = map + 14; i <= target.length(); i++)
    {
        if (target[i] == ' ' || target[i] == char(13))
            break;
        contet += target[i];
    }
     fflush(stdin);
    return contet;
}



string HTTP_QUERY::get_params(string &target, bool &init)
{
    string params{};
    for (size_t ui = 3; ui < target.size(); ui++)
    {
        if (init)
        {
            if (target[ui] == 'H' || target[ui] == ' ')
                break;
            params += target[ui];
        }
        else if (target[ui] == '?' && ui <= max_iterator)
        {
            init = true;
        }
    }
     fflush(stdin);
    return params;
}

#endif //!