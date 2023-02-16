#include <zmq.hpp>


#if defined(BUILD_MONOLITHIC)
#define main   cppzmq_hello_world_main
#endif

int main()
{
    zmq::context_t ctx;
    zmq::socket_t sock(ctx, zmq::socket_type::push);
    sock.bind("inproc://test");
    sock.send(zmq::str_buffer("Hello, world"), zmq::send_flags::dontwait);
	return 0;
}
