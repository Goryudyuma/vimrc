Vim�UnDo� m;����.�]�LՑ�{�>+gK�J�O�La   "                  3       3   3   3    V[P�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 typedef void 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 typedef void (*sighandler_t)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 typedef void (*sighandler_t)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 !typedef void (*sighandler_t)(int)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 sighandler_t trap_signal5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 7sighandler_t trap_signal(int sig, sighandler_t handler)5�_�      	                 8    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 8sighandler_t trap_signal(int sig, sighandler_t handler) 5�_�      
           	   	       ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  sigemptyset}5�_�   	              
   	       ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  sigemptyset(&act.sa_mask)}5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �   
               if }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �   
               if (sigaction)}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �   
              ! if (sigaction(sig, &act, &old))}5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �   
              % if (sigaction(sig, &act, &old) < 0)}5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 signalHandlerForAlarm5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 signalHandlerForAlarm(int sig)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 signalHandlerForAlarm(int sig) 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  alarm}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 
 alarm(5)}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts()}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts("I catch a signal.")}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  if }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  if (sig == SIGALRM)}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts()}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  puts("5 sec. elapsed")}5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 main5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 main(int argc, char *argv)5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 main(int argc, char *argv[])5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 main(int argc, char *argv[])5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 main(int argc, char *argv[]) 5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  trap_signal}5�_�   #   %           $      +    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 - trap_signal(SIGALRM, signalHandlerForAlarm)}5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  alarm}5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 
 alarm(5)}5�_�   &   (           '          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  while}5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  while(TRUE)}5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  while(TRUE) }5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 	  sleep}}5�_�   *   ,           +      	    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                   sleep(1)}}5�_�   +   -           ,      	    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                   fprintf}}5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                   fprintf(stdout, )}}5�_�   -   /           .      %    ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 (  fprintf(stdout, "%d-th loop\n", i++)}}5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                   }}5�_�   /   1           0           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  exit}5�_�   0   2           1           ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                 	 exit(0)}5�_�   1   3           2   !        ����                                                                                                                                                                                                                                                                                                                                                             V[P�     �                  }5�_�   2               3           ����                                                                                                                                                                                                                                                                                                                                                             V[P�    �      !          	 exit(0);�                   }�                '  fprintf(stdout, "%d-th loop\n", i++);�                  sleep(1);�                 while(TRUE) {�                	 int i=0;�                
 alarm(5);�                - trap_signal(SIGALRM, signalHandlerForAlarm);�                 puts("5 sec. elapsed");�                 if (sig == SIGALRM)�                 puts("I catch a signal.");�                
 alarm(5);�                 return old.sa_handler;�                 return NULL;�   
             $ if (sigaction(sig, &act, &old) < 0)�   	              act.sa_flags = SA_RESTART;�      
           sigemptyset(&act.sa_mask);�      	           act.sa_handler = handler;�                 struct sigaction act, old;5��