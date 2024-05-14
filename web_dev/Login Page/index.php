<?php
session_start();
?>

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
                    $username = mysqli_real_escape_string($con,$_POST['username']);
                    $password = mysqli_real_escape_string($con,$_POST['password']);

                    $result = mysqli_query($con,"SELECT * FROM users WHERE Username='$username' AND Password='$password'" ) or die("Select Error");
                    $row = mysqli_fetch_assoc($result);

                    if(is_array($row) && !empty($row)){
                        $_SESSION['name'] = $row['Name'];
                        $_SESSION['username'] = $row['Username'];
                        $_SESSION['valid'] = $row['Email'];
                        $_SESSION['id'] = $row['ID'];
                        $_SESSION['password'] = $row['Password'];
                    }
                    else{
                        echo "<div class='message'>
                            <p>Wrong Username or Password</p>
                            </div> <br>";

                        echo "<a href='index.php'><button class='btn'>Try Again</button>";
                    }
                    if(isset($_SESSION['valid'])){
                        header("Location: create.php");
                    }
                }
                else{

            
            ?>
            <header>LOGIN</header>
            <form action="" method="post">
                <div class="field">
                <div class="input">
                    <label for="username">Username</label>
                    <input type="text" name="username" id="username" autocomplete="off" required>
                </div>

                <div class="input">
                    <label for="password">Password</label>
                    <input type="text" name="password" id="password" autocomplete="off" required>
                </div>

                <div class="submission">
                    <input type="submit" class="btn" name="submit" id="login" required>
                </div>
                </div>
                <div class="create">
                    Create Account <a href="create.php">Register</a>
                </div>
            </form>
        </div>
        <?php } ?>
        </div>
    </div>
    
</body>
</html>