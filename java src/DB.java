import java.sql.*;

class DB  {
	public static void main(String...ars)  {
		// sqlite jar driver is present inside lib of jdk-11 and classpath is set
		// if the db is not there, it'll be created

		String url = "jdbc:sqlite:C:/Users/elcot/Desktop/java src/library.db";

		try {	
			Connection conn = DriverManager.getConnection(url);
			Statement st = conn.createStatement();
			String sql = "create table if not exists student(name text, regno int);";
			st.executeUpdate(sql);

			sql = "insert into student values('santhosh',136);";
			st.executeUpdate(sql);

			sql = "select * from student";
			ResultSet rs = st.executeQuery(sql);

			while(rs.next()) {
				System.out.println("Name: "+rs.getString(1)+" Regno: "+rs.getString(2));
			}

			conn.close();
			System.out.println("connection closed");
		}
		catch(SQLException se) {
			System.out.println(se);
		}
	}
}
