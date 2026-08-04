package com.example.food_app

import android.annotation.SuppressLint
import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        val login : Button
        val register : Button
        setContentView(R.layout.activity_main)
          login=findViewById<Button>(R.id.loginbtnID)
        register=findViewById<Button>(R.id.registerBtnID)
        login.setOnClickListener {
             Toast.makeText(this,"Login has been clicked", Toast.LENGTH_SHORT).show()
              val intent = Intent(this, sign_in_Activity::class.java)
            startActivity(intent)

            register.setOnClickListener {
                Toast.makeText(this,"Register has been clicked", Toast.LENGTH_SHORT).show()
                val intent = Intent(this, sign_up_activity::class.java)
                startActivity(intent)
        }
        }
    }}
