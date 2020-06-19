[@react.component]
let make = (~classes) => {
  MaterialUi.(
    <AppBar position=`Fixed>
      <Toolbar>
        <IconButton edge=`Start className=classes##navIcon>
          <Icons.MenuFilled />
        </IconButton>
        <Typography variant=`H6> {React.string("Articles")} </Typography>
      </Toolbar>
    </AppBar>
  );
};