#include"HEADER.CPP"


int main()
{
    int n;  //Declaration of variable n.
    cout<<"Enter the size of random vector : "<<endl;   //Getting the size of the vector.
    cin>>n;  //Storing the size of the vector.

    vector<int> vec_random(n, 0);   //Initializing the vector with initial value zero.
    srand(time(0));   //Using this for different output.
    generate(vec_random.begin(), vec_random.end(), rand);  //Generating values using generate function.

    save_output(vec_random, "vector.txt");  //Saves the random vector in the vector.txt file using the save_output function.
    cout<<"The random vector is stored in the vector.txt file"<<endl;;

    clock_t start_asc, start_des, stop_asc, stop_des;  //Used for calculating the time required for both the sorts.
    double time_a, time_d;

    vector<int> vec_a;   //Declaring the vector for ascending order.
    start_asc = clock();  //Starting the clock for calculating time.
    vec_a = read_vector("vector.txt");  //For saving the data in the vector using read_vector function.
    ShakerSort_AscendingOrder(vec_a);  //Calling the function for sorting the vector in ascending order.
    stop_asc = clock();  //Stopping the clock.
    save_output(vec_a, "Ascending Sort.txt");   //Saving the sorted vector in the file.
    time_a = double(stop_asc - start_asc) / double(CLOCKS_PER_SEC);   //Calculating the time for ascending order sorting.
    cout << "The time for sorting ascendingly is : " << fixed << time_a << setprecision(5) << "seconds" << endl;  //Printing the time taken for execution.
    cout << "The vector which is sorted ascendingly is stored in AscendingSort.txt"<<endl;

    vector<int> vec_d;  //Declaring the vector for descending order.
    start_des = clock();  //Starting the clock for calculating time.
    vec_d = read_vector("vector.txt");  //For saving the data in the vector using read_vector function.
    ShakerSort_DescendingOrder(vec_a);  //Calling the function for sorting the vector in descending order.
    stop_des = clock();  //Stopping the clock.
    save_output(vec_a, "Descending Sort.txt");  //Saving the sorted vector in the file.
    time_d = double(stop_asc - start_asc) / double(CLOCKS_PER_SEC);  //Calculating the time for descending order sorting.
    cout << "The time for sorting descendingly is : " << fixed << time_a << setprecision(5) << "seconds" << endl;   //Printing the time taken for execution.
    cout << "The vector which is sorted descendingly is stored in DescendingSort.txt"<<endl;
}
