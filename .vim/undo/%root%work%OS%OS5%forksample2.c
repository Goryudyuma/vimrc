Vim�UnDo�  �iR�M���Nn�G�IJ}/ ���|�A�                    =       =   =   =    VZ#�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                "int main(int argc, char *argv[]) {   		int pid;   	if ((pid = fork()) < 0) {   		perror("fork was failed");   
		exit(1);   	}   	if (pid == 0 ) {   		printf("I am a child\n");   		pid = getpid();   (		printf("My process id is %d.\n", pid);   
		exit(0);   		} else {   		int status;   //		waitpid(pid, &status, 0);   		printf("I am the parent.\n");   		pid = getpid();   (		printf("My process id is %d.\n", pid);   
		exit(0);   	}   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                  �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 int main5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 int main(int argc, char *argv)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                  int main(int argc, char *argv[])5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                  int main(int argc, char *argv[])5�_�                       !    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 !int main(int argc, char *argv[]) 5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if }5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ()}5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ((pid = fork))}5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ((pid = fork()))}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ((pid = fork()))}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ((pid = fork()) < 0)}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                   if ((pid = fork()) < 0) }5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                    perror}}5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                    perror()}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                    perror("fork was failed")}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                    perror("fork was failed")}}5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 
    exit}}5�_�                    	   
    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                     exit(1)}}5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �   	              	 }}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �   
              	  if }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �   
              	  if (pid == 0 )}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �   
              	  if (pid == 0 ) }5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	   printf}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	   printf()}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	   printf("I am a child\n")}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	   printf("I am a child\n")}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	    pid = getpid}}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 	    pid = getpid()}}5�_�                        	    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		 printf}}5�_�      !                  
    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		 printf()}}5�_�       "           !      !    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 %		 printf("My process id is %d.\n")}}5�_�   !   #           "      '    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 *		 printf("My process id is %d.\n", pid)}}5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 
		  exit}}5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		  exit(77)}}5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		   }}5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		   } else }5�_�   &   (           '          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		    printf}}5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 		    printf()}}5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 $		    printf("I am the parent.\n")}}5�_�   )   +           *      !    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 $		    printf("I am the parent.\n")}}5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			  waitpid}}5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			  waitpid(pid, &status, 0)}}5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			   printf}}5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			   printf()}}5�_�   .   0           /      2    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 6			   printf("My child retruns %d when he exits.\n")}}5�_�   /   1           0      @    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 C			   printf("My child retruns %d when he exits.\n", WEXITSTATUS)}}5�_�   0   2           1      G    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 K			   printf("My child retruns %d when he exits.\n", WEXITSTATUS(status))}}5�_�   1   3           2      H    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 K			   printf("My child retruns %d when he exits.\n", WEXITSTATUS(status))}}5�_�   2   4           3          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			    pid = getpid}}5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 			    pid = getpid()}}5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 				 printf}}5�_�   5   7           6          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 				 printf()}}5�_�   6   8           7      #    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 '				 printf("My process id is %d.\n")}}5�_�   7   9           8      )    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 ,				 printf("My process id is %d.\n", pid)}}5�_�   8   :           9      
    ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 				  exit}}5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 				  exit(0)}}5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 					   }}5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             VZ#�     �                 				   }5�_�   <               =           ����                                                                                                                                                                                                                                                                                                                                                             VZ#�    �                				   }�                				   }�                				  exit(0);�                +				 printf("My process id is %d.\n", pid);�                			    pid = getpid();�                J			   printf("My child retruns %d when he exits.\n", WEXITSTATUS(status));�                			  waitpid(pid, &status, 0);�                			 int status;�                #		    printf("I am the parent.\n");�                		   } else {�                		  exit(77);�                )		 printf("My process id is %d.\n", pid);�                	    pid = getpid();�                	   printf("I am a child\n");�   
             	  if (pid == 0 ) {�   	             	 }�      
              exit(1);�      	             perror("fork was failed");�                  if ((pid = fork()) < 0) {�                	 int pid;5��