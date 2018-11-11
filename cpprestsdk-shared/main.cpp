#include <iostream>
#include <cpprest/json.h>
using namespace web;

int main() {
	json::value v(json::value::object());
	json::object& o = v.as_object();
	o[U("message")] = json::value::string(U("hello world!"));

	ucout << v.serialize();

    return 0;
}