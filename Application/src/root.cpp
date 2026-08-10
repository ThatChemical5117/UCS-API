#include <routes/root.h>

#include "crow/mustache.h"

namespace API {
	crow::mustache::rendered_template indexRoute(const std::string& name) {
		crow::mustache::template_t page = crow::mustache::load("index.html");
		crow::mustache::context ctx({{"person", name}});
		return page.render(ctx);
	}
}
