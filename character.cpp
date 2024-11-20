#include <iostream>
namespace OOPConsole {
	
	Character hero = new Character();
	public class Character {
		int heath = 100;
		int x = 50;
		int y = 25;
	}
	
	int main {
		Console.WriteLine(hero.heath);
	}
	
	public int Health
{
	get
	{
		return this.health;
	}

	set
	{
		this.health = value;
	}
}

	public int X {
	get
	{
		return this.x;
	}
	
	public bool IsAlive
{
	get
	{
		return this.health > 0 ? true : false;
	}
}
	Console.WriteLine($"Hero's health: {hero.Health} | Hero is alive: {hero.IsAlive}");
	hero.Health = 0;
	Console.WriteLine($"Hero's health: {hero.Health} | Hero is alive: {hero.IsAlive}");
}
	public void Move(string direction)
{
	switch (direction)
	{
		case "forward":
			this.x++;
			break;
		case "backward":
			this.x--;
			break;
		case "up":
			this.y++;
			break;
		case "down":
			this.y--;
			break;
	}
}
	Character hero = new Character();

string command = string.Empty;

while (command != "exit")
{
	Console.WriteLine($"You are at {hero.Coordinates}. Where to go?");
	command = Console.ReadLine();

	hero.Move(command);
}
	// public class Character
{
	private string name;
	private int health;
	private int x;
	private int y;

	public Character(string name, int x, int y)
	{
		this.name = name;
		this.x = x;
		this.y = y;
		this.health = 100;
		Console.WriteLine($"Object {this.name} was created at {this.Coordinates}.");
	}

	//public class Character
{
	private string name;
	private int health;
	private int x;
	private int y;

	public Character(string name, int x, int y)
	{
		this.name = name;
		this.x = x;
		this.y = y;
		this.health = 100;
		Console.WriteLine($"Object {this.name} was created at {this.Coordinates}.");
	}

	//public class Character
{
	private string name;
	private int health;
	private int x;
	private int y;

	public Character(string name, int x, int y)
	{
		this.name = name;
		this.x = x;
		this.y = y;
		this.health = 100;
		Console.WriteLine($"Object {this.name} was created at {this.Coordinates}.");
	}

	// public class Character
{
	private string name;
	private int health;
	private int x;
	private int y;

	public Character(string name, int x, int y)
	{
		this.name = name;
		this.x = x;
		this.y = y;
		this.health = 100;
		Console.WriteLine($"Object {this.name} was created at {this.Coordinates}.");
	}

	// Character hero = new Character("Player", 50, 20);
Character npc = new Character("Enemy", 20, 30);
Console.ReadKey();
}
}

}

}