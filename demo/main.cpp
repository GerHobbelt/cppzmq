#include <zmq.hpp>


#if defined(BUILD_MONOLITHIC)
#define main   cppzmq_demo_main
#endif

int main(int argc, const char **argv)
{
    zmq::context_t context;
    return 0;
}
