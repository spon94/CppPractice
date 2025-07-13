#include <memory>

struct connection;
struct destination;

void connect(destination *);
void disconnect(connection);

void f(destination &d) {
  connection conn = connect(d);
  std::shared_ptr<connection> p(&conn,
                                [](connection *conn) { disconnect(*conn); });
}
