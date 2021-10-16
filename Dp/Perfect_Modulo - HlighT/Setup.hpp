#ifndef SETUP_HPP
#define SETUP_HPP

        #include "ITPlib.hpp"

            void Set_Info(Problem_Info& in4){
                in4.number_of_test_case = 15;
                in4.limit_size_of_file = 500000; //bytes
            }
            
            void Easy(ofstream& fout){
                int t = randll(500, 1000);
                while(t--){
                    ll L = randll(10, 10000000);
                    ll R = randll(L, 100000000);
                    fout << L << ' ' << R << endl;
                    fout << randll(10, 20) << endl;
                }
                fout << -1;
            }
            void Medium(ofstream& fout){
                int t = randll(700, 1000);
                while(t--){
                    ll L = randll(10, 1000000000);
                    ll R = randll(L, 10000000000);
                    fout << L << ' ' << R << endl;
                    fout << randll(20, 30) << endl;
                }
                fout << -1;
            }
            void Hard(ofstream& fout){
                int t = 1000;
                while(t--){
                    ll L = randll(1e10, 1e15) - randll(1e7, 1e9);
                    ll R = randll(L + randll(1e9, 1e12), 1e16) - randll(1e7, 1e9);
                    fout << L << ' ' << R << endl;
                    fout << randll(30, 40) << endl;
                }
                fout << -1;
            }
        // Nếu muốn thêm mức cực khó, bỏ cmt hàm sau và chỉnh sửa:
            #define NIGHTMARE
                int quantity = 3; // Số lượng test cực khó.
                void NightMare(ofstream& fout){
                    int t = 1000;
                    while(t--){
                        ll L = randll(1e14, 1e17) - randll(1e10, 1e12);
                        ll R = randll(L + randll(1e11, 1e12), 1e17) - randll(1e9, 1e10);
                        fout << L << ' ' << R << endl;
                        fout << randll(40, 50) << endl;
                    }
                    fout << -1;
                }
            
#endif
