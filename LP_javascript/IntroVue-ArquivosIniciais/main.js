import productDisplayComponent from "./ProductDisplay.js";

const app = Vue.createApp({
    data() {
        return {
            carrinho: [],
            premium: false
        }
    },
    components: {
        'product-display': productDisplayComponent
    },
    methods: {
        atualizaCarrinho(id){
            this.carrinho.push(id);
        },
        deleteCarrinho(id){
            this.carrinho.pop(id);
        }
    }
    
})

//Monta o app
const mountedApp = app.mount('#app');

