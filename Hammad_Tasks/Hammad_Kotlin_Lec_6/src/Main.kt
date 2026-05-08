//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // Range

    val number=6

    val result=number in 1..7 // if the given number in range of 1 to 7 then true

    println(result) // true

    val a=9
    val re=a in 1 until 9 // this result will false because until dont include the last

    println(re) // false because of with until dont include the last number

    // When

    val Animal="Dog"

    when(Animal){ // used instead of if else

        "Cat" -> println("This is cat")
        "Dog" -> println("This is Dog")
        "Horse" -> println("This is Horse")

        else -> println("Dont  have any animal")
    }

    // As anexpression

    val x=2
    val r=when(x){
        1 -> " this is 1"
        2 -> " this is 2"
        3 -> " this is 3"
        4 -> " this is 4"

        else -> "This is not a number"
    }

    println(r) // this is 2
}