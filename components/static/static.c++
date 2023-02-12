#include <iostream>

/**
 * c++ hase two meaning of class and behaviour depends
 * inside class(struct): the static X gone be shared with all of instances 
 * outside class(struct): means that the static obj gonna be visible only for its transformation unit (file fn)
 * **/

static int s_var = 1; // availble only in this translation unit
// like a private member in a clas the s_var gona be visible only in this translation unit

static void fn() {}