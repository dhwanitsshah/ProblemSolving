package singleton;

import java.util.*;
import java.lang.*;
import java.io.*;

public class Singleton
{
	public static void main(String[] args)
	{
		//SingletonDemo s = new SingletonDemo(); //will not work since made default constructor private
		SingletonDemo s = SingletonDemo.getInstance();
		s.setValue("Kesha");
		System.out.println(s.getValue());
		
		SingletonDemo s2 = SingletonDemo.getInstance();
		System.out.println(s2.getValue());
		
	}
}

class SingletonDemo{
	
	private static SingletonDemo s = new SingletonDemo();
	private String value;
	private SingletonDemo(){}
	
	public static SingletonDemo getInstance(){
		return s;
	}
	
	public void setValue(String value){
		this.value = value;
	}
	
	public String getValue(){
		return this.value;
	}
}

