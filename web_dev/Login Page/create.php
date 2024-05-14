<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>

    <div class="container">
        <div class="box">
        <div class="form-box">

            <?php 

            include("config.php");
            if(isset($_POST['submit'])){
                $name = $_POST['name'];
                $username = $_POST['username'];
                $id = $_POST['id'];
                $email = $_POST['email'];
                $password = $_POST['password'];

                $verify_query = mysqli_query($con,"SELECT Email FROM users WHERE Email='$email'");

            if(mysqli_num_rows($verify_query) !=0){
                echo "<div class='message'>
                    <p>This email is already used</p>
                    </div> <br>";

                echo "<a href='index.php'><button class='btn'>Go Back</button>";
            }

            else{

                mysqli_query($con,"INSERT INTO users(Name,Username,Email,ID,Password) VALUES('$name','$username','$email','$id','$password')") or die("Error");

                echo "<div class='message'>
                    <p>Registration Successfully</p>
                    </div> <br>";

                echo "<a href='index.php'><button class='btn'>Login Now</button>";

            }

        } else{

    ?>
            <header>SIGN-UP</header>
            <form action="" method="post">
                <div class="field">
                <div class="input">
                    <label for="username">Name</label>
                    <input type="text" name="name" id="namename" autocomplete="off">
                </div>

                <div class="input">
                    <label for="username">Username</label>
                    <input type="text" name="username" id="username" autocomplete="off">
                </div>
                
                <div class="input">
                    <label for="email">Email</label>
                    <input type="text" name="email" id="email" autocomplete="off">
                </div>
                
                <div class="input">
                    <label for="idnumber">ID Number</label>
                    <input type="text" name="id" id="id" autocomplete="off">
                </div>

                <div class="input">
                    <label for="password">Password</label>
                    <input type="text" name="password" id="password" autocomplete="off">
                </div>  

                <div class="submission">
                    <input type="submit" class="btn" name="submit" value="Register" required>
                </div>
                </div>
                <div class="create">
                    Already have account <a href="index.php">Login</a>
                </div>
            </form>
        </div>
        </div>
        <?php } ?>
    </div>
</body>
</html>