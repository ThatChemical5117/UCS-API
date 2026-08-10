#include <crow.h>

#include <routes/root.h>


int main()
{
	crow::SimpleApp app;

	CROW_ROUTE(app, "/")([]() {
		crow::mustache::template_t page = crow::mustache::load("index.html");
		crow::mustache::context ctx ({{"person", "Jeff"}});
		return page.render(ctx);
	});

	CROW_ROUTE(app, "/<string>")(API::indexRoute);


	app.port(3000).multithreaded().run();
}
