fun main()
{
    var str_1: String?=null
    print("Length of str 1: ")
    println(str_1?.length ?: 1000)

    var str_2: String="MuhammaD"
    println(str_2.uppercase())

   println(str_2!!.lowercase())

   str_1?.let {
       println("Length of str  1: ${it.length} ")
   }
}