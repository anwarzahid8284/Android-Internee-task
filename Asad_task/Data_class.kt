fun main()
{
    val obj1=Person2("wali",22,1)
    val obj2=Person2("wali",22,1)

    println(obj1.equals(obj2))

    var obj3=obj2.copy(grade = 3)
    println("Copy: ${obj3}")
    println(obj3)

    print(obj2.component3())

    println("HashCode Obj1:  ${obj1.hashCode()}")
    println("HashCode Obj2:  ${obj2.hashCode()}")
    println("HashCode Obj3:  ${obj3.hashCode()}")
}
data class Person2(var name: String, var age: Int,var grade:Int)