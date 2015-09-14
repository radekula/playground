#ifndef __WORKER_H__
#define __WORKER_H__


#include <unistd.h>


class Worker
{
    private:
	string name;				// Name of worker - can be set by parent
	pid_t pid;				// Worker pid - set by system when worker is running

    public:
	Worker( );				// Constructor of worker
	~Worker( );				// Destructor of worker

    public:
	string GetName( );			// Returns name of worker
	void SetName( string new_name );	// Sets worker name

	pid_t GetPid( );			// Returns worker pid

    public:
	void Run( );				// Running a worker
};



#endif
