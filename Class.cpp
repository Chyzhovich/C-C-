
class Ball {

private:

	string m_color ;
	double m_radius;

public:
	Ball() 
	{
		m_color = "Red";
		m_radius = 20.0;
	};
	Ball(const std::string &p_color) 
	{
		m_color = p_color;
		m_radius = 20.0;
			
    }
	Ball(double p_rad)
	{
		m_radius = p_rad;
		m_color = "Red";
		
	}
	Ball(const string &p_color, double rad )
	{
		m_color = p_color;
		m_radius = rad;
		
	}
	void print()
	{
		cout << "Color is: " << m_color << " " << "Radius is: " << m_radius << endl;
	}]
	Ball(const Ball& other);

};

int main()
{
    setlocale(LC_ALL, "RUS");
	
	Ball def;
	def.print();

	Ball black("black");
	black.print();

	Ball thirty(30.0);
	thirty.print();

	Ball blackThirty("black", 30.0);
	blackThirty.print();
	
	
	
	system("pause>>
