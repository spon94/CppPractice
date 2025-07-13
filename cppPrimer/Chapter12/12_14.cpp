#include <memory>

struct connection;
struct destination;

void connect(destination *);
void disconnect(connection);

void delete_connection(connection *conn) { disconnect(conn); }

void f(destination &d) {
  connection conn = connect(d);
  std::shared_ptr<connection> p(&conn, delete_connection);
}
