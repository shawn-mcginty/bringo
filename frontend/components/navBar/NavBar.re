[@react.component]
let make = (~classes) => {
  MaterialUi.(
    <AppBar position=`Static>
      <Toolbar>
        <IconButton edge=`Start className=classes##navIcon>
          <Icons.MenuFilled />
        </IconButton>
        <Typography variant=`H6> {React.string("Articles")} </Typography>
      </Toolbar>
    </AppBar>
  );
};