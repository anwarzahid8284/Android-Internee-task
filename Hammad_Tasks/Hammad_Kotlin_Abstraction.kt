abstract class Student{
    fun ad_Info(){
        println("Devo Shiv method")
    }

    abstract  fun requirments()
}
class Person2:Student(){
    override fun requirments() {
        println("My person2 class called ")
    }
}
class Person1:Student(){
    override fun requirments() {
        println("My Person1 class called")
    }
}

fun main(){
    // we write the  type of object is parent class because when i assign to  same like (s) obj shan class then comes error
    // because shan also inherited from the parent class mean their types are same to same

    var s:Student=Person2()
    s.requirments()

    s=Person1()
    s.requirments()
}
