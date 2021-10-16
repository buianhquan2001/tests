#ifndef SETUP_HPP
#define SETUP_HPP

        #include "ITPlib.hpp"

            void Set_Info(Problem_Info& in4){
                in4.number_of_test_case = 15;
                in4.limit_size_of_file = 0; //bytes
            }
            
            void Easy(ofstream& fout){
                int t = randll(15, 50);
                fout << t << endl;
                while(t--){
                    int n = randll(1, 100);
                    fout << n << endl;
                    if(n%2 == 0 && randll(0, 2) > 0){
                        vector <int> a(n/2);
                        for(int& i:a)
                            i = randll(1, 1e9);
                        for(auto i:a)
                            fout << i << ' ';
                        for(auto i:vector <int> (a.rbegin(), a.rend()))
                            fout << i << ' ';
                    }
                    else
                        for(int i=0; i<n; i++)
                            fout << randll(1, 1e9) << ' ';
                    fout << endl;
                }
            }
            void Medium(ofstream& fout){
                int t = randll(50, 100);
                fout << t << endl;
                while(t--){
                    int n = randll(50, 100);
                    fout << n << endl;
                    if(n%2 == 0 && randll(0, 2) > 0){
                        vector <int> a(n/2);
                        for(int& i:a)
                            i = randll(1, 1e9);
                        for(auto i:a)
                            fout << i << ' ';
                        for(auto i:vector <int> (a.rbegin(), a.rend()))
                            fout << i << ' ';
                    }
                    else
                        for(int i=0; i<n; i++)
                            fout << randll(1, 1e9) << ' ';
                    fout << endl;
                }
            }
            void Hard(ofstream& fout){
                int t = 100;
                fout << t << endl;
                while(t--){
                    int n = 100;
                    fout << n << endl;
                    if(n%2 == 0 && randll(0, 2) > 0){
                        vector <int> a(n/2);
                        for(int& i:a)
                            i = randll(1, 1e9);
                        for(auto i:a)
                            fout << i << ' ';
                        for(auto i:vector <int> (a.rbegin(), a.rend()))
                            fout << i << ' ';
                    }
                    else
                        for(int i=0; i<n; i++)
                            fout << randll(1, 1e9) << ' ';
                    fout << endl;
                }
            }
        // Nếu muốn thêm mức cực khó, bỏ cmt hàm sau và chỉnh sửa:
            // #define NIGHTMARE
            //     int quantity = 3; // Số lượng test cực khó.
            //     void NightMare(ofstream& fout){
                   
            //     }
            
#endif
