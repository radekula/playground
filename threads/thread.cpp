#include "worker.h"




Worker::Worker( )
{
};



Worker::~Worker( )
{
};



string Worker::GetName( )
{
    return name;
};



void Worker::SetName( string new_name )
{
    name = new_name
};



pid_t Worker::GetPid( )
{
    return pid;
};




void Worker::Run( )
{
};
