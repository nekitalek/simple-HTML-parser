#pragma once
#pragma warning( disable:4996 )

#include <iostream>
#include <vector>
#include "page.h"
#include "html_attr_and_tag.h"

#define SCRIPT_STARTED  (-5)
#define STYLE_STARTED   (-4)
#define XML_STARTED     (-3)
#define COMMENT_STARTED (-2)

void *gen_new_str(char * str);
void *gen_new_strw(char * str);
void *gen_new_attr(std::string attr, std::string val);
void *gen_new_attr(std::string attr);
void *gen_new_attr_list(Attribute * attr);
void *append_attr_in_list(Attribute * attr, std::list<Attribute> * lst);
int Token(void * text, int value);
void clean_structures();