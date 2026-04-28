#define GPIO_BASE 0x41200000
#define DATA_REG  *(volatile unsigned int*)(GPIO_BASE + 0)

int main(){
    while(1){
        DATA_REG = 0xF;
        for (volatile int i=0; i<100000000; i++);
        DATA_REG = 0x0;
        for (volatile int i=0; i<100000000; i++);
    }
}

