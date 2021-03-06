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
        // N???u mu???n th??m m???c c???c kh??, b??? cmt h??m sau v?? ch???nh s???a:
            // #define NIGHTMARE
            //     int quantity = 3; // S??? l?????ng test c???c kh??.
            //     void NightMare(ofstream& fout){
                   
            //     }
            
#endif
