#pragma once

#include "crow/mustache.h"
namespace API
{
	crow::mustache::rendered_template indexRoute(const std::string&);
}
