fun main()
{
    val loading_obj=Result.Loading()
    val Success_obj=Success()
    val Error_obj=Error()

    check(loading_obj)
    check(Success_obj)
    check(Error_obj)

}

//check function
fun check(state:Result)
{
    when(state)
    {
        is Result.Loading -> println("Loading")
        is Success -> println("Success")
        is Error -> println("Error")
    }
}

sealed class Result
{
    class Loading : Result()
}
class Success : Result()
class Error : Result()