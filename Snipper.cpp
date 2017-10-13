// oH bOY hERE wE gOooooOOOOoOoOoOOooooo
#include <stdio.h>
#include <unistd.h>
#include <curl/curl.h>
#include <sstream>
#include <iostream>
#include "rapidjson/document.h"
#include <cstring>
#include <chrono>
#include "gumbo.h"
#include <thread>

#define MAX_THREADS 4 //? MULTITHREAD FUTURE PLS >?

using namespace std;
using namespace rapidjson;