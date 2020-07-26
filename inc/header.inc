<!-- Get file location from within server to allow for correct anchors -->
<?php $currentpage = $_SERVER['REQUEST_URI'];
   $filepath = "";
   // Break down url to determine which page should be given "active" CSS class
   $pageurl = $_SERVER['REQUEST_URI'];
   $path = parse_url($pageurl, PHP_URL_PATH);
   $breakurl = explode('/', $path);
   $page = end($breakurl);
   
   if ($page == "" || $page == "index.php"){
       $filepath = "./";
    }
    else {
       $filepath = "../";    
    }
   ?>
<nav>
   <div id="logo">
      <?php echo '<img src="'.$filepath.'images/logo-new.png" alt="">';
         ?>   
   </div>
   <div class="navcontainer">
      <div class="topnav" id="myTopnav">
         <a href="<?php echo $filepath.'index.php';?>" <?php if ($page == 'index.php' || $page == ""){echo'class="active"';}?>>Home</a> 
         <div class="dropdown">
            <button class="dropbtn <?php if ($page == 'Hydrobath.php' || $page == 'Pet-Sitting.php' || $page == 'Dog-Walking.php' || $page == 'Photography.php'){echo'active';}?>"> Services  
            </button>
            <div class="dropdown-content">
               <a href="<?php echo $filepath.'services/Hydrobath.php';?>" <?php if ($page == 'Hydrobath.php'){echo'class="active"';}?>>Hydrobath</a>
               <a href="<?php echo $filepath.'services/Pet-Sitting.php';?>" <?php if ($page == 'Pet-Sitting.php'){echo'class="active"';}?>>Pet Sitting</a>
               <a href="<?php echo $filepath.'services/Dog-Walking.php';?>" <?php if ($page == 'Dog-Walking.php'){echo'class="active"';}?>>Dog Walking</a>
            </div>
         </div>
         <a href="https://www.facebook.com/pawesomefurniture/" target="_blank">Store</a>
         <a href="<?php echo $filepath.'services/About-Us.php';?>" <?php if ($page == 'About-Us.php'){echo'class="active"';}?>>About Us</a>
         <a href="<?php echo $filepath.'services/Contact-Us.php';?>" <?php if ($page == 'Contact-Us.php'){echo'class="active"';}?>>Contact Us</a> 
         <a href="javascript:void(0);" class="icon" onclick="nav()">&#9776;</a>
      </div>
   </div>
</nav>