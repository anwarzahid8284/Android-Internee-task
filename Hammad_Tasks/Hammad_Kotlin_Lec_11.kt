//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // Array

    val arr=arrayOf("One","Two","Three")

    println(arr[0])  // print krne ke treke

    println(arr.get(0)) // print krne ke treke

    println(arr.set(1,"Five")) // value set krne ke treke

    println(arr[1])

  println(arr.size)  // Size print krne ke treke

    println("By loop accessing ")

    // by loop
     for (i in arr){
         println(i)
     }

    println("By loop with indexes")

    for((j,e) in arr.withIndex()){
        println("$j -- $e")
    }
}