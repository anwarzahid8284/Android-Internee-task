fun main()
{
    val list = listOf(1,2,3,4,"asap",45,55,55,"asa")
    println(list)
   //list[0]="ew" //-> Error q k list immutable hai
    for (a in list)
    {
        println(a)
    }


}