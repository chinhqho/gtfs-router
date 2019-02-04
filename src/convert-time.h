#pragma once

#include <string>
#include <algorithm> // std::count
#include <cmath> // floor
#include <stdexcept>
#include <time.h>

#include <Rcpp.h>

// ----------  Functions to convert start time:  ----------
bool time_is_standard (const std::string &hms);
int convert_time_std (std::string hms);
int convert_time_lubridate (std::string hms);
int rcpp_convert_time (const std::string &hms);

// ----------  Vector conversion of GTFS times:  ----------
int convert_time_to_seconds (std::string hms);
Rcpp::IntegerVector rcpp_time_to_seconds (std::vector <std::string> times);