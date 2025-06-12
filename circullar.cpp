//CircullarQueuesArray_0063
//commit 15

#include <iostream>
using namespace std;

class Queues
{
    private:
        static const int max = 5;
        int FRONT, REAR;
        int queue_array[5];

    public:
        Queues()
        {
            FRONT = -1;
            REAR = -1;
        }

        void insert()
        {
            int num;
            cout << "enter a number : ";
            cin >> num;
            cout << endl;

            //1.cek apakah antrian penuh
            if((FRONT == 0 && REAR == max - 1) || (FRONT == REAR +1))
            {
                cout << "\nQueue overflow\n"; 
                return;
            }

            //2.cek apakah antrian kosong
            if (FRONT == -1)
            {
                FRONT = 0;
                REAR = 0;
            }
            else
            {
                //jika rear berada di posisi terakhir array, kembali ke awal array
                if (REAR == max - 1)
                    REAR = 0;
                else
                    REAR = REAR + 1;
            }
            queue_array[REAR] = num;
        }

        void remove()
        {
            //cek antrian kosong
            if (FRONT == -1)
            {
                cout << "queue underflow\n";
                return;
            }
            cout << "\nthe element deleted from the queue is : " << queue_array[FRONT] << "\n";

            //cek antrian memiliki satu elemen
            if (FRONT == REAR)
            {
                FRONT = -1;
                REAR = -1;
            }
            else
            {
                //jika elemen dihapus berada di posisi akhir, kembali ke awal
                if (FRONT == max - 1)
                    FRONT = 0;
                else
                    FRONT = FRONT +1;
            }
        }

};