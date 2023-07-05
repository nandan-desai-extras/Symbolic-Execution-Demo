pipeline {
    agent any
    stages {
    	stage('Static Analysis') {
            agent {
                docker {
                    image 'klee/klee:latest'
                    reuseNode true
                }
            }
            steps {
                sh 'make clean'
                sh 'scan-build --status-bugs -o ./scan-build-reports make scan'
            }
        }
        
        
        stage('Dynamic Analysis') {
            agent {
                docker {
                    image 'klee/klee:latest'
                    reuseNode true
                }
            }
            steps {
            	sh 'make clean'
                sh 'make sym'
                sh 'klee --libc=uclibc --posix-runtime -only-output-states-covering-new -exit-on-error main_sym_test.bc'
            }
        }
        
 
        stage('Release Build') {
            agent {
                docker {
                    image 'klee/klee:latest'
                    reuseNode true
                }
            }
            steps {
            	sh 'make clean'
                sh 'make release'
            }
        }
    }
}
