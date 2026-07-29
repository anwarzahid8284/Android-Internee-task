 package com.example.aboutme

import android.content.Context
import android.os.Bundle
import android.view.View
import android.view.inputmethod.InputMethodManager
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        findViewById<Button>(R.id.buttonID).setOnClickListener {
            nickName(it)
        }
        }
    private fun nickName(view: View)
    {
        val neditText=findViewById<EditText>(R.id.edit_text_ID)
        val t_textView=findViewById<TextView>(R.id.hide_text_ID)

        t_textView.text=neditText.text
        neditText.visibility= View.GONE
        view.visibility= View.GONE;

        val imm=getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
        imm.hideSoftInputFromWindow(view.windowToken , 0)

    }
    }