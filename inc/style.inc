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
<link href="https://fonts.googleapis.com/css?family=Bitter|Montserrat|Open+Sans&display=swap" rel="stylesheet">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.11.2/css/all.min.css" integrity="sha256-+N4/V/SbAFiW1MPBCXnfnP9QSN3+Keu+NlB+0ev/YKQ=" crossorigin="anonymous" />
<?php echo '<link rel = "stylesheet"  type = "text/css"  href = "'.$filepath.'css/style.css" />'; ?>