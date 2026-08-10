#include <crow.h>

int main()
{
	crow::SimpleApp app;

	CROW_ROUTE(app, "/")([]() {
		crow::mustache::template_t page = crow::mustache::load("index.html");
		crow::mustache::context ctx ({{"person", "Jeff"}});
		return page.render(ctx);
	});


	app.port(3000).multithreaded().run();
}
