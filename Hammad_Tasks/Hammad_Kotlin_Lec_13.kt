//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // Create object for person class
    println("\n For p1 \n")

    val p1=person("Alli",20)

    println(p1.canVote())


    val p2=person("Ahmad",12)

    println("\n For p2 \n")

    println(p2.canVote())

    p2.age=24

    println("\n For Update p2 \n")
    println(p2.canVote())
}

// Person Class

class  person(val name:String,var age: Int){

    // Function that work on data_member and check able or not for Vote

    fun canVote(): Boolean{
        return age>18
    }
}