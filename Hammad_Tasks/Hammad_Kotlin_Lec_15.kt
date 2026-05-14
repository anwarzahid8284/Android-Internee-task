//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // create object of person class

    var p1=person("Ahmad",20)

    println(p1.name)
    println(p1.age)

    println("For negative age setter called ")
    
    p1.age=-12 // to call setter decisional statement it give else part

}

            // Getter & Setter

class person(namePara: String , agePara: Int){

    var name=namePara
        get() {
            println("Getter called ") // to check that getter called
            return  field.uppercase()
        }

    var age=agePara
        set(value) {



            if (value>0){
                field=value
            }else{
                println("Enter valid age")
            }
        }

}