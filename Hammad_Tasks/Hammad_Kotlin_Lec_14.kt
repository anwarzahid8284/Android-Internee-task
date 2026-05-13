fun main(){
val a1=Authomobile("Alli","Petrole",5,true)

    val c1=car("Rashid","Petrole") // when we create object of class car then init block will executed

}


class Authomobile(val name: String, val type : String,val seating : Int,hasAirBegs: Boolean){
    val airbages=hasAirBegs
    init {
        println("$name  is created")
    }
    fun drive(){}

    init {
        println("2nd initilizer block created ")
    }
    fun applyBrakes(){}
}

class  car(val  name: String,val type: String,val maxSeating: Int,val tyers: Int){

    // Secondary constructor

    constructor(paraName: String,paraType: String):  // when we create a secondary constructor than will call primary with it
            this(paraName,paraType,6,4)

    init {
        println("$name  type is  $type Seates are $maxSeating amd Tyers are $tyers")
    }
}