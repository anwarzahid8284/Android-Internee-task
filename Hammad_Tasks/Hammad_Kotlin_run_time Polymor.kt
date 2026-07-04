open  class  Person(val animal: String){
    open fun sound(){
        println("$animal ' class Person ' bhoonk rhahe")
    }

}

class  cat(val name: String):Person(name){

    override fun sound() {
        println("$name  ' class Cat ' bhoonk rhahe")
    }

}
class  dog(val name: String):Person(name){
    override fun sound() {
        println("$name dog 'class dog ' bhoonk rhahe ")
    }
}


fun main(){
    println("----------------------")
    var c :Person =cat("Dog")

    c.sound()
    println("----------------------")
    c= dog("Kutta")

    c.sound()
    println("----------------------")

    c=Person("Hole Janwar")

    c.sound()

    println("----------------------")
}