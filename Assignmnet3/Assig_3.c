#include <stdio.h>
#include <mpi.h>
// These are standard header files for input/output operations and MPI functionalities, respectively.

int main(int argc, char *argv[])
// This is the entry point of the program. argc is the argument count, and argv is an array of command-line arguments.
{
    int rank, size;
    int num[20]; // N=20, n=4
    MPI_Init(&argc, &argv);
    //  Initializes the MPI environment.



    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    //  MPI_Comm_rank retrieves the rank of the calling process, and MPI_Comm_size retrieves the total number of processes in the communicator (in this case, MPI_COMM_WORLD).

    for (int i = 0; i < 20; i++)
        num[i] = i + 1;

    if (rank == 0)
    {
        int s[4];
        printf("Distribution at rank %d \n", rank);
        for (int i = 1; i < 4; i++)
        MPI_Send(&num[i * 5], 5, MPI_INT, i, 1,MPI_COMM_WORLD); // N/n i.e. 20/4=5


        int sum = 0, local_sum = 0;
        
        for (int i = 0; i < 5; i++)
        {
            local_sum = local_sum + num[i];
            // Process 0 receives partial sums from the other processes (ranks 1 to 3).
            // It waits to receive each partial sum using MPI_Recv.
        }
        for (int i = 1; i < 4; i++)
        {
            MPI_Recv(&s[i], 1, MPI_INT, i, 1, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);
        }
//         &s[i]: Specifies the memory location where the received data will be stored. It stores the received data in the array s at index i.
// 1: Indicates the number of elements to receive. In this case, it's just one integer.
// MPI_INT: Specifies the datatype of the received data, which is an integer.
// i: Specifies the rank of the source process from which data is received. In each iteration of the loop, data is received from the process with rank i.
// 1: Specifies the tag associated with the message. It is used to differentiate between different types of messages in communication.
// MPI_COMM_WORLD: Specifies the communicator through which the communication occurs. It indicates communication among all MPI processes.
// MPI_STATUS_IGNORE: Specifies that the status of the received message will be ignored. 

        printf("local sum at rank %d is %d\n", rank, local_sum);
        sum = local_sum;
        for (int i = 1; i < 4; i++)
            sum = sum + s[i];
        printf("final sum = %d\n\n", sum);
    }
    else
    {
        int k[5];
        MPI_Recv(k, 5, MPI_INT, 0, 1, MPI_COMM_WORLD,
                 MPI_STATUS_IGNORE);
        //         k: Specifies the memory location where the received data will be stored. It's an array of integers.
        // 5: Indicates the number of integers to receive. Since the master process sends 5 integers to each worker process, this parameter matches the number of elements in the sent array.
        // MPI_INT: Specifies the datatype of the received data, which is an integer.
        // 0: Specifies the rank of the source process from which data is received. In this case, it's the master process (rank 0).
        // 1: Specifies the tag associated with the message. It ensures that the received message matches the tag used in the MPI_Send call.
        // MPI_COMM_WORLD: Specifies the communicator through which the communication occurs. It indicates communication among all MPI processes.
        // MPI_STATUS_IGNORE: Specifies that the status of the received message will be ignored.

        int local_sum = 0;
        for (int i = 0; i < 5; i++)
        {
            local_sum = local_sum + k[i];
        }
        printf("local sum at rank %d is %d\n", rank, local_sum);
        MPI_Send(&local_sum, 1, MPI_INT, 0, 1, MPI_COMM_WORLD);
//  Sends the local sum calculated by the worker process back to the master process.
// &local_sum: Specifies the memory location of the local sum to be sent.
// 1: Indicates the number of elements to send, which is just one integer.
// MPI_INT: Specifies the datatype of the data being sent.
// 0: Specifies the rank of the destination process to which data is sent, which is the master process (rank 0).
// 1: Specifies the tag associated with the message, matching the tag used in the MPI_Recv call in the master process.
// MPI_COMM_WORLD: Specifies the communicator through which the communication occurs.
    }
    MPI_Finalize();
    // finalizes the MPI environment.
    return 0;
}

// In the else block, executed by MPI processes with ranks other than 0 (i.e., worker processes), data is received from the master process (rank 0), local computation is performed, and the result is sent back to the master process.
// k: Specifies the memory location where the rece/ived data will be stored. It's an array of integers.
// 5: Indicates the number of integers to receive. Since the master process sends 5 integers to each worker process, this parameter matches the number of elements in the sent array.
// 0: Specifies the rank of the source process from which data is received. In this case, it's the master process (rank 0).
// 1: Specifies the tag associated with the message. It ensures that the received message matches the tag used in the MPI_Send call.
// MPI_COMM_WORLD: Specifies the communicator through which the communication occurs. It indicates communication among all MPI processes.
// &local_sum: Specifies the memory location of the local sum to be sent.
// 1: Indicates the number of elements to send, which is just one integer.
// MPI_INT: Specifies the datatype of the data being sent.
// 0: Specifies the rank of the destination process to which data is sent, which is the master process (rank 0).
// 1: Specifies the tag associated with the message, matching the tag used in the MPI_Recv call in the master process.
// MPI_COMM_WORLD: Specifies the communicator through which the communication occurs.






