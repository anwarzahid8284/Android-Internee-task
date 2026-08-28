fun main()
{
    var list = mutableListOf("A", "B", "C", "D", "E")
    println(list)

    //list.add(23) error -> kotlin ne dekha k aap ne sare element string diye is liye is ne list
                         //ka type string set kar diya
    //println(list)

    var list2= mutableListOf("A", "B", "C", "D", "E",43)

    list2[0]=430
    println(list2)

    list2.add("M sajid")
    println(list2)

    list2[3]="DD"
    println(list2)

   list2.remove("M sajid")
    println(list2)
 }