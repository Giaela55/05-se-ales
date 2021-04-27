
/* ejercicio 3 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

/* void manejador_senial (int a)
{

}*/
int main()
{
 	signal(SIGKILL, SIG_IGN);
        signal(SIGTSTP, SIG_IGN); 
        
	printf("Proceso PID = %d\n", getpid());
	
	while(1);

	exit(0);
}

/* proceso PID= 167, y cuando mostre el  el resultado luego con echo me salio
 127 porque? */
